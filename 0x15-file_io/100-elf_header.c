#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

#define BUFFER_SIZE 64

void print_error(int code, const char *msg) {
    dprintf(2, "%s\n", msg);
    exit(code);
}

void print_elf_header(Elf64_Ehdr *header) {
    printf("ELF Header:\n");
    printf("  Magic:   %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x\n",
           header->e_ident[0], header->e_ident[1], header->e_ident[2], header->e_ident[3],
           header->e_ident[4], header->e_ident[5], header->e_ident[6], header->e_ident[7],
           header->e_ident[8], header->e_ident[9], header->e_ident[10], header->e_ident[11],
           header->e_ident[12], header->e_ident[13], header->e_ident[14], header->e_ident[15]);
    printf("  Class:                             %s\n", header->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
    printf("  Data:                              %s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "unknown");
    printf("  Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
    printf("  OS/ABI:                            %s\n", header->e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" :
                                                         header->e_ident[EI_OSABI] == ELFOSABI_NETBSD ? "UNIX - NetBSD" :
                                                         header->e_ident[EI_OSABI] == ELFOSABI_LINUX ? "UNIX - Linux" :
                                                         header->e_ident[EI_OSABI] == ELFOSABI_SOLARIS ? "UNIX - Solaris" :
                                                         header->e_ident[EI_OSABI] == ELFOSABI_NONE ? "UNIX - None" : "<unknown>");
    printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
    printf("  Type:                              %s\n", header->e_type == ET_EXEC ? "EXEC (Executable file)" :
                                                         header->e_type == ET_DYN ? "DYN (Shared object file)" : "unknown");
    printf("  Entry point address:               0x%lx\n", (unsigned long)header->e_entry);
}

int main(int argc, char *argv[]) {
    int fd;
    Elf64_Ehdr elf_header;

    if (argc != 2) {
        print_error(98, "Usage: elf_header elf_filename");
    }

    fd = open(argv[1], O_RDONLY);
    if (fd == -1) {
        print_error(98, "Error: Can't open file");
    }

    if (read(fd, &elf_header, sizeof(elf_header)) != sizeof(elf_header)) {
        print_error(98, "Error: Can't read ELF header");
    }

    if (lseek(fd, 0, SEEK_SET) == -1) {
        print_error(98, "Error: Can't seek back to the beginning of the file");
    }

    print_elf_header(&elf_header);

    close(fd);

    return 0;
}
