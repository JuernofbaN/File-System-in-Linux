

// Do not change this file //

#define MODE_READ 0
#define MODE_APPEND 1
#define BLOCKSIZE 4096 // bytes
/*
434 block ;
block 0 = superblock
        block 1,2,3,4 = bitmap block;
bitmap block = whether blocks are free or not;

16384 bytes;
1 integer = 4 bytes;
1 integer represents 1 block;
16384 / 4 bytes = 4096 integers in 4 blocks.
        it means we can totally have 4096 blocks.
1 int = 4 bytes
        4096 Bytes can store 4096/4 = 1024 integers
                it means that that block can store an integer with 1024 size. like that: int[1024];
                if that can store 1024 integers, for as maximum 1024 blocks when can store their fulll or empty situation in just using one block;
                int bitmap[1024];
                bitmap[0] = 0 ; /full
                bitmap[1] = full ;
                bitmap [249] = 0 ;
                */
int create_format_vdisk (char *vdiskname, unsigned int  m);

int sfs_mount (char *vdiskname);

int sfs_umount ();

int sfs_create(char *filename);

int sfs_open(char *filename, int mode);

int sfs_close(int fd);

int sfs_getsize (int fd);

int sfs_read(int fd, void *buf, int n);

int sfs_append(int fd, void *buf, int n);

int sfs_delete(char *filename);


