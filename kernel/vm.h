#ifndef VM_H
#define VM_H
struct mmap_vma{
    uint64 addr;
    uint64 protection;
    uint64 length;
    uint64 flags;
    struct file *file;
    struct mmap_vma *next;
    struct mmap_vma *prev;
};
#endif