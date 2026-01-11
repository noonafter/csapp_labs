int64_t (*)() _init()
{
    return call_gmon_start();
}

int64_t sub_400c60()
{
    int64_t var_8 = data_603ff0;
    /* jump -> data_603ff8 */
}

int32_t strcasecmp(char const* arg1, char const* arg2)
{
    /* tailcall */
    return strcasecmp(arg1, arg2);
}

int64_t sub_400c76()
{
    int64_t var_8 = 0;
    /* tailcall */
    return sub_400c60();
}

int32_t* __errno_location()
{
    /* tailcall */
    return __errno_location();
}

int64_t sub_400c86()
{
    int64_t var_8 = 1;
    /* tailcall */
    return sub_400c60();
}

void srandom(uint32_t x)
{
    /* tailcall */
    return srandom(x);
}

int64_t sub_400c96()
{
    int64_t var_8 = 2;
    /* tailcall */
    return sub_400c60();
}

int32_t strncmp(char const* arg1, char const* arg2, uint64_t arg3)
{
    /* tailcall */
    return strncmp(arg1, arg2, arg3);
}

int64_t sub_400ca6()
{
    int64_t var_8 = 3;
    /* tailcall */
    return sub_400c60();
}

char* strcpy(char* arg1, char const* arg2)
{
    /* tailcall */
    return strcpy(arg1, arg2);
}

int64_t sub_400cb6()
{
    int64_t var_8 = 4;
    /* tailcall */
    return sub_400c60();
}

int32_t puts(char const* str)
{
    /* tailcall */
    return puts(str);
}

int64_t sub_400cc6()
{
    int64_t var_8 = 5;
    /* tailcall */
    return sub_400c60();
}

ssize_t write(int32_t fd, void const* buf, uint64_t nbytes)
{
    /* tailcall */
    return write(fd, buf, nbytes);
}

int64_t sub_400cd6()
{
    int64_t var_8 = 6;
    /* tailcall */
    return sub_400c60();
}

void __stack_chk_fail() __noreturn
{
    /* tailcall */
    return __stack_chk_fail();
}

int64_t sub_400ce6()
{
    int64_t var_8 = 7;
    /* tailcall */
    return sub_400c60();
}

int64_t mmap(void* addr, uint64_t len, int32_t prot, int32_t flags, int32_t fd, off64_t offset)
{
    /* tailcall */
    return mmap(addr, len, prot, flags, fd, offset);
}

int64_t sub_400cf6()
{
    int64_t var_8 = 8;
    /* tailcall */
    return sub_400c60();
}

int64_t memset(void* arg1, int32_t arg2, uint64_t arg3)
{
    /* tailcall */
    return memset(arg1, arg2, arg3);
}

int64_t sub_400d06()
{
    int64_t var_8 = 9;
    /* tailcall */
    return sub_400c60();
}

int64_t alarm()
{
    /* tailcall */
    return alarm();
}

int64_t sub_400d16()
{
    int64_t var_8 = 0xa;
    /* tailcall */
    return sub_400c60();
}

int32_t close(int32_t fd)
{
    /* tailcall */
    return close(fd);
}

int64_t sub_400d26()
{
    int64_t var_8 = 0xb;
    /* tailcall */
    return sub_400c60();
}

ssize_t read(int32_t fd, void* buf, uint64_t nbytes)
{
    /* tailcall */
    return read(fd, buf, nbytes);
}

int64_t sub_400d36()
{
    int64_t var_8 = 0xc;
    /* tailcall */
    return sub_400c60();
}

void __libc_start_main(int32_t (* main)(int32_t argc, char** argv, char** envp), int32_t argc, char** ubp_av, void (* init)(), void (* fini)(), void (* rtld_fini)(), void* stack_end) __noreturn
{
    /* tailcall */
    return __libc_start_main(main, argc, ubp_av, init, fini, rtld_fini, stack_end);
}

int64_t sub_400d46()
{
    int64_t var_8 = 0xd;
    /* tailcall */
    return sub_400c60();
}

__sighandler_t signal(int32_t sig, __sighandler_t handler)
{
    /* tailcall */
    return signal(sig, handler);
}

int64_t sub_400d56()
{
    int64_t var_8 = 0xe;
    /* tailcall */
    return sub_400c60();
}

struct hostent* gethostbyname(char const* name)
{
    /* tailcall */
    return gethostbyname(name);
}

int64_t sub_400d66()
{
    int64_t var_8 = 0xf;
    /* tailcall */
    return sub_400c60();
}

int64_t __memmove_chk(void* arg1, void const* arg2, uint64_t arg3, uint64_t arg4)
{
    /* tailcall */
    return __memmove_chk(arg1, arg2, arg3, arg4);
}

int64_t sub_400d76()
{
    int64_t var_8 = 0x10;
    /* tailcall */
    return sub_400c60();
}

int64_t strtol(char const* nptr, char** endptr, int32_t base)
{
    /* tailcall */
    return strtol(nptr, endptr, base);
}

int64_t sub_400d86()
{
    int64_t var_8 = 0x11;
    /* tailcall */
    return sub_400c60();
}

int64_t memcpy(void* arg1, void const* arg2, uint64_t arg3)
{
    /* tailcall */
    return memcpy(arg1, arg2, arg3);
}

int64_t sub_400d96()
{
    int64_t var_8 = 0x12;
    /* tailcall */
    return sub_400c60();
}

time_t time(time_t* arg1)
{
    /* tailcall */
    return time(arg1);
}

int64_t sub_400da6()
{
    int64_t var_8 = 0x13;
    /* tailcall */
    return sub_400c60();
}

int64_t random()
{
    /* tailcall */
    return random();
}

int64_t sub_400db6()
{
    int64_t var_8 = 0x14;
    /* tailcall */
    return sub_400c60();
}

int32_t _IO_getc(FILE* fp)
{
    /* tailcall */
    return _IO_getc(fp);
}

int64_t sub_400dc6()
{
    int64_t var_8 = 0x15;
    /* tailcall */
    return sub_400c60();
}

int32_t __isoc99_sscanf(char const* s, char const* format, ...)
{
    /* tailcall */
    return __isoc99_sscanf(s, format);
}

int64_t sub_400dd6()
{
    int64_t var_8 = 0x16;
    /* tailcall */
    return sub_400c60();
}

int64_t munmap()
{
    /* tailcall */
    return munmap();
}

int64_t sub_400de6()
{
    int64_t var_8 = 0x17;
    /* tailcall */
    return sub_400c60();
}

int32_t __printf_chk(int32_t flag, char const* format, ...)
{
    /* tailcall */
    return __printf_chk(flag, format);
}

int64_t sub_400df6()
{
    int64_t var_8 = 0x18;
    /* tailcall */
    return sub_400c60();
}

FILE* fopen(char const* filename, char const* mode)
{
    /* tailcall */
    return fopen(filename, mode);
}

int64_t sub_400e06()
{
    int64_t var_8 = 0x19;
    /* tailcall */
    return sub_400c60();
}

int32_t getopt(int32_t argc, char* const* argv, char const* optstring)
{
    /* tailcall */
    return getopt(argc, argv, optstring);
}

int64_t sub_400e16()
{
    int64_t var_8 = 0x1a;
    /* tailcall */
    return sub_400c60();
}

uint64_t strtoul(char const* nptr, char** endptr, int32_t base)
{
    /* tailcall */
    return strtoul(nptr, endptr, base);
}

int64_t sub_400e26()
{
    int64_t var_8 = 0x1b;
    /* tailcall */
    return sub_400c60();
}

int32_t gethostname(char* name, uint64_t len)
{
    /* tailcall */
    return gethostname(name, len);
}

int64_t sub_400e36()
{
    int64_t var_8 = 0x1c;
    /* tailcall */
    return sub_400c60();
}

void exit(int32_t status) __noreturn
{
    /* tailcall */
    return exit(status);
}

int64_t sub_400e46()
{
    int64_t var_8 = 0x1d;
    /* tailcall */
    return sub_400c60();
}

int32_t connect(int32_t fd, union __CONST_SOCKADDR_ARG addr, socklen_t len)
{
    /* tailcall */
    return connect(fd, addr, len);
}

int64_t sub_400e56()
{
    int64_t var_8 = 0x1e;
    /* tailcall */
    return sub_400c60();
}

int32_t __fprintf_chk(FILE* fp, int32_t flag, char const* format, ...)
{
    /* tailcall */
    return __fprintf_chk(fp, flag, format);
}

int64_t sub_400e66()
{
    int64_t var_8 = 0x1f;
    /* tailcall */
    return sub_400c60();
}

int32_t __sprintf_chk(char* s, int32_t flag, uint64_t slen, char const* format, ...)
{
    /* tailcall */
    return __sprintf_chk(s, flag, slen, format);
}

int64_t sub_400e76()
{
    int64_t var_8 = 0x20;
    /* tailcall */
    return sub_400c60();
}

int64_t socket()
{
    /* tailcall */
    return socket();
}

int64_t sub_400e86()
{
    int64_t var_8 = 0x21;
    /* tailcall */
    return sub_400c60();
}

void _start(int64_t arg1, int64_t arg2, void (* arg3)()) __noreturn
{
    int64_t stack_end_1;
    int64_t stack_end = stack_end_1;
    void ubp_av;
    __libc_start_main(main, __return_addr, &ubp_av, __libc_csu_init, __libc_csu_fini, arg3, 
        &stack_end);
    /* no return */
}

int64_t (* const)() call_gmon_start()
{
    if (!__gmon_start__)
        return __gmon_start__;
    
    return __gmon_start__();
}

int64_t deregister_tm_clones()
{
    return 7;
}

int64_t register_tm_clones()
{
    return 0;
}

void __do_global_dtors_aux()
{
    if (!completed.6976)
    {
        deregister_tm_clones();
        completed.6976 = 1;
    }
}

int64_t frame_dummy()
{
    __JCR_END__;
    /* tailcall */
    return register_tm_clones();
}

void usage(char* name) __noreturn
{
    if (!is_checker)
    {
        __printf_chk(1, "Usage: [-hq] %s -i <infile> \n", name);
        puts("  -h          Print help information");
        puts("  -q          Don't submit result to server");
        puts("  -i <infile> Input file");
    }
    else
    {
        __printf_chk(1, "Usage: [-h] %s -i <infile> -a <authkey> -l <level>\n", name);
        puts("  -h           Print help information");
        puts("  -i <infile>  Input file");
        puts("  -a <authkey> Authentication key");
        puts("  -l <level>   Attack level");
    }
    
    exit(0);
    /* no return */
}

int64_t initialize_target(int opt_level, int force_random)
{
    void* fsbase;
    int64_t rax = *(fsbase + 0x28);
    check_level = opt_level;
    unsigned int id = gencookie(target_id);
    cookie = id;
    authkey = gencookie(id);
    srandom(target_id + 1);
    int16_t rax_5 = scramble(random());
    int16_t rdx = 0;
    
    if (force_random)
    {
        srandom(time(nullptr));
        rdx = random();
    }
    
    buf_offset = ((rdx + rax_5) << 3) + 0x100;
    target_prefix = 0x63;
    
    if (notify && !is_checker)
    {
        int32_t rbx_1 = 0;
        char hostname[0x100];
        
        if (gethostname(&hostname, 0x100))
        {
            puts("FAILED: Initialization error: Running on unknown host");
            exit(8);
            /* no return */
        }
        
        int32_t rax_13;
        
        while (true)
        {
            char* rdi_6 = host_table[rbx_1];
            
            if (!rdi_6)
            {
                rax_13 = 0;
                break;
            }
            
            if (!strcasecmp(rdi_6, &hostname))
            {
                rax_13 = 1;
                break;
            }
            
            rbx_1 += 1;
        }
        
        if (!rax_13)
        {
            __printf_chk(1, "FAILED: Initialization error: Running on an illegal host [%s]\n", 
                &hostname);
            exit(8);
            /* no return */
        }
        
        char status_msg[0x2000];
        
        if (init_driver(&status_msg) < 0)
        {
            __printf_chk(1, "FAILED: Initialization error:\n%s\n", &status_msg);
            exit(8);
            /* no return */
        }
    }
    
    int64_t result = rax ^ *(fsbase + 0x28);
    
    if (!result)
        return result;
    
    __stack_chk_fail();
    /* no return */
}

int32_t main(int argc, char** argv)
{
    signal(0xb, seghandler);
    signal(7, bushandler);
    signal(4, illegalhandler);
    char const* const optstring = "hqi:";
    
    if (is_checker)
    {
        signal(0xe, sigalrmhandler);
        alarm(5);
        optstring = "hi:a:l:";
    }
    
    infile = stdin;
    int opt_level = 0;
    int32_t r14 = 0;
    
    while (true)
    {
        char rax_8 = getopt(argc, argv, optstring);
        
        if (rax_8 == 0xff)
            break;
        
        if (rax_8 - 0x61 <= 0x10)
            switch (rax_8)
            {
                case 0x61:
                {
                    r14 = strtoul(optarg, nullptr, 0x10);
                    continue;
                }
                case 0x68:
                {
                    usage(*argv);
                    /* no return */
                }
                case 0x69:
                {
                    FILE* rax_3 = fopen(optarg, "r");
                    infile = rax_3;
                    
                    if (rax_3)
                        continue;
                    
                    __fprintf_chk(stderr, 1, "Cannot open input file '%s'\n", optarg);
                    return 1;
                    break;
                }
                case 0x6c:
                {
                    opt_level = strtol(optarg, nullptr, 0xa);
                    continue;
                }
                case 0x71:
                {
                    notify = 0;
                    continue;
                }
            }
        
        __printf_chk(1, "Unknown flag '%c'\n", rax_8);
        usage(*argv);
        /* no return */
    }
    
    initialize_target(opt_level, 0);
    
    if (is_checker && r14 != authkey)
    {
        __printf_chk(1, "Supplied authentication key 0x%x != target key\n", r14);
        check_fail();
        /* no return */
    }
    
    __printf_chk(1, "Cookie: 0x%x\n", cookie);
    stable_launch(buf_offset);
    return 0;
}

unsigned int scramble(unsigned int val)
{
    unsigned int volatile a[0xa];
    
    for (int32_t i = 0; i <= 9; i += 1)
        a[i] = i * 0x797f + val;
    
    a[5] *= 0xa644;
    a[8] *= 0x50d5;
    a[7] *= 0x3a00;
    a[7] *= 0x9f29;
    a[9] *= 0x1696;
    a[3] *= 0x294d;
    a[9] *= 0xc87d;
    a[3] *= 0x907e;
    a[0] *= 0xc35f;
    a[2] *= 0x4332;
    a[5] *= 0x3fd9;
    a[1] *= 0x49d7;
    a[0] *= 0x8c7a;
    a[3] *= 0xef8;
    a[6] *= 0x122d;
    a[2] *= 0xc616;
    a[6] *= 0x4841;
    a[7] *= 0x9244;
    a[7] *= 0x5f19;
    a[7] *= 0x3a8d;
    a[6] *= 0x4a30;
    a[5] *= 0xf274;
    a[4] *= 0x8204;
    a[5] *= 0xd582;
    a[5] *= 0x1cc;
    a[6] *= 0xd77;
    a[6] *= 0xd850;
    a[3] *= 0x245;
    a[5] *= 0xb65c;
    a[2] *= 0xb162;
    a[1] *= 0xb82f;
    a[6] *= 0x80fc;
    a[8] *= 0x8e65;
    a[0] *= 0x82b2;
    a[3] *= 0x44ad;
    a[5] *= 0x632e;
    a[0] *= 0x2119;
    a[7] *= 0xa18a;
    a[4] *= 0xd895;
    a[3] *= 0xe881;
    a[4] *= 0x8fc1;
    a[2] *= 0x1c07;
    a[0] *= 0x4d47;
    a[1] *= 0xccdd;
    a[3] *= 0x2f89;
    a[0] *= 0xcc2d;
    a[1] *= 0xf5b8;
    a[5] *= 0xe829;
    a[5] *= 0x6069;
    a[8] *= 0x719c;
    a[8] *= 0x281a;
    a[9] *= 0x33f3;
    a[7] *= 0x2a6c;
    a[7] *= 0xec51;
    a[6] *= 0x4c8a;
    a[3] *= 0xdd63;
    a[2] *= 0xcaca;
    a[5] *= 0x445d;
    a[4] *= 0x17b7;
    a[2] *= 0x1bb5;
    a[4] *= 0x8f7a;
    a[6] *= 0x2ef9;
    a[4] *= 0x350c;
    a[1] *= 0x950;
    a[2] *= 0x81fd;
    a[1] *= 0x3a8c;
    a[5] *= 0x4fb6;
    a[0] *= 0xf34a;
    a[1] *= 0x43fd;
    a[7] *= 0x7d24;
    a[9] *= 0xb46d;
    int32_t i_1 = 0;
    int32_t result = 0;
    
    for (; i_1 <= 9; i_1 += 1)
        result += a[i_1];
    
    return result;
}

unsigned int getbuf()
{
    char buf[0x20];
    Gets(&buf);
    return 1;
}

void touch1() __noreturn
{
    vlevel = 1;
    puts("Touch1!: You called touch1()");
    validate(1);
    exit(0);
    /* no return */
}

void touch2(unsigned int val) __noreturn
{
    uint64_t val_1 = val;
    vlevel = 2;
    
    if (val != cookie)
    {
        __printf_chk(1, "Misfire: You called touch2(0x%.8x)\n", val_1);
        fail(2);
    }
    else
    {
        __printf_chk(1, "Touch2!: You called touch2(0x%.8x)\n", val_1);
        validate(2);
    }
    
    exit(0);
    /* no return */
}

uint32_t hexmatch(unsigned int val, char* sval)
{
    void* fsbase;
    int64_t rax = *(fsbase + 0x28);
    char cbuf[0x6e];
    char* s = &cbuf[random() % 0x64];
    __sprintf_chk(s, 1, -1, "%.8x", val);
    int32_t rax_10;
    rax_10 = !strncmp(sval, s, 9);
    
    if (rax == *(fsbase + 0x28))
        return rax_10;
    
    __stack_chk_fail();
    /* no return */
}

void touch3(char* sval) __noreturn
{
    vlevel = 3;
    
    if (!hexmatch(cookie, sval))
    {
        __printf_chk(1, "Misfire: You called touch3("%s")\n", sval);
        fail(3);
    }
    else
    {
        __printf_chk(1, "Touch3!: You called touch3("%s")\n", sval);
        validate(3);
    }
    
    exit(0);
    /* no return */
}

int64_t test()
{
    getbuf();
    return __printf_chk(1, "No exploit.  Getbuf returned 0x%x\n", 1);
}

uint64_t save_char(unsigned char c)
{
    uint64_t gets_cnt_1 = gets_cnt;
    
    if (gets_cnt_1 <= 0x3ff)
    {
        uint32_t rdx_1 = gets_cnt_1 * 3;
        gets_buf[rdx_1] = trans_char[c >> 4];
        gets_buf[rdx_1 + 1] = *((c & 0xf) + "0123456789ABCDEF");
        gets_buf[rdx_1 + 2] = 0x20;
        gets_cnt_1 = gets_cnt_1 + 1;
        gets_cnt = gets_cnt_1;
    }
    
    return gets_cnt_1;
}

int64_t save_term()
{
    int64_t result = gets_cnt * 3;
    gets_buf[result] = 0;
    return result;
}

void check_fail(...) __noreturn
{
    __printf_chk(1, "\nFAIL\t%ctarget\t%d\t%s\n", target_prefix, check_level, &gets_buf);
    exit(1);
    /* no return */
}

char* Gets(char* dest)
{
    gets_cnt = 0;
    char* dest_1 = dest;
    
    while (true)
    {
        int32_t rax_1 = _IO_getc(infile);
        
        if (rax_1 == 0xffffffff || rax_1 == 0xa)
        {
            *dest_1 = 0;
            save_term();
            return dest;
        }
        
        *dest_1 = rax_1;
        save_char(rax_1);
        dest_1 = &dest_1[1];
    }
}

int64_t notify_server(int pass, int level)
{
    void* fsbase;
    int64_t rax = *(fsbase + 0x28);
    
    if (!is_checker)
    {
        if (gets_cnt + 0x64 > 0x2000)
        {
            __printf_chk(1, "Internal Error: Input string is too large.");
            exit(1);
            /* no return */
        }
        
        unsigned int authkey_1 = -1;
        
        if (notify)
            authkey_1 = authkey;
        
        void* const r9_1 = "PASS";
        
        if (!pass)
            r9_1 = "FAIL";
        
        char autoresult[0x2000];
        __sprintf_chk(&autoresult, 1, 0x2000, "%d:%s:0x%.8x:%ctarget:%d:%s", target_id, r9_1, 
            authkey_1, target_prefix, level, &gets_buf);
        
        if (!notify)
        {
            void* const rdx_4 = "PASS";
            
            if (!pass)
                rdx_4 = "FAIL";
            
            __printf_chk(1, "%s: Would have posted the following:\n", rdx_4);
            __printf_chk(1, "\tuser id\t%s\n", user_id);
            __printf_chk(1, "\tcourse\t%s\n", course);
            __printf_chk(1, "\tlab\t%s\n", lab);
            __printf_chk(1, "\tresult\t%s\n", &autoresult);
        }
        else if (!pass)
            puts("FAILED");
        else
        {
            char status_msg[0x2000];
            
            if (driver_post(user_id, course, lab, &autoresult, 0, &status_msg) < 0)
            {
                __printf_chk(1, "FAILED: %s\n", &status_msg);
                exit(1);
                /* no return */
            }
            
            puts("PASS: Sent exploit string to server to be validated.");
            puts("NICE JOB!");
        }
    }
    
    int64_t result = rax ^ *(fsbase + 0x28);
    
    if (!result)
        return result;
    
    __stack_chk_fail();
    /* no return */
}

int64_t validate(int level)
{
    if (!is_checker)
    {
        if (vlevel == level)
        {
            __printf_chk(1, "Valid solution for level %d with target %ctarget\n", level, 
                target_prefix);
            return notify_server(1, level);
        }
        
        puts("\nMismatched validation levels");
        return notify_server(0, level);
    }
    
    if (vlevel != level)
    {
        puts("\nMismatched validation levels");
        check_fail();
        /* no return */
    }
    
    int check_level_1 = check_level;
    
    if (check_level_1 == level)
        return __printf_chk(1, "PASS\t%ctarget\t%d\t%s\n", target_prefix, level, &gets_buf);
    
    __printf_chk(1, "\nCheck level %d != attack level %d\n", check_level_1, level);
    check_fail();
    /* no return */
}

int64_t fail(int level)
{
    if (!is_checker)
        return notify_server(0, level);
    
    check_fail();
    /* no return */
}

void bushandler(int sig) __noreturn
{
    if (is_checker)
    {
        puts("Bus error");
        check_fail();
        /* no return */
    }
    
    puts("Crash!: You caused a bus error!");
    puts("Better luck next time");
    notify_server(0, 0);
    exit(1);
    /* no return */
}

void seghandler(int sig) __noreturn
{
    if (is_checker)
    {
        puts("Segmentation Fault");
        check_fail();
        /* no return */
    }
    
    puts("Ouch!: You caused a segmentation fault!");
    puts("Better luck next time");
    notify_server(0, 0);
    exit(1);
    /* no return */
}

void illegalhandler(int sig) __noreturn
{
    if (is_checker)
    {
        puts("Illegal instruction");
        check_fail();
        /* no return */
    }
    
    puts("Oops!: You executed an illegal instruction");
    puts("Better luck next time");
    notify_server(0, 0);
    exit(1);
    /* no return */
}

void sigalrmhandler(int sig) __noreturn
{
    if (is_checker)
    {
        puts("Timeout");
        check_fail();
        /* no return */
    }
    
    __printf_chk(1, "\nTimeout!: Your attack takes more than %d seconds\n", 5);
    notify_server(0, 0);
    exit(1);
    /* no return */
}

int64_t launch(size_t offset)
{
    void* fsbase;
    int64_t rax = *(fsbase + 0x28);
    void var_18;
    memset((&var_18 - ((offset + 0x1e) & 0xfffffffffffffff0) + 0xf) & 0xfffffffffffffff0, 0xf4, 
        offset);
    
    if (infile == stdin)
        __printf_chk(1, "Type string:");
    
    vlevel = 0;
    test();
    
    if (is_checker)
    {
        puts("No exploit");
        check_fail();
        /* no return */
    }
    
    puts("Normal return");
    int64_t result = rax ^ *(fsbase + 0x28);
    
    if (!result)
        return result;
    
    __stack_chk_fail();
    /* no return */
}

int64_t stable_launch(size_t offset)
{
    int64_t rbx;
    int64_t var_8 = rbx;
    global_offset = offset;
    void* rax = mmap(0x55586000, 0x100000, 7, 0x132, 0, 0);
    
    if (rax != 0x55586000)
    {
        munmap(rax, 0x100000);
        __fprintf_chk(stderr, 1, "Couldn't map stack to segment at 0x%lx\n", 0x55586000);
        exit(1);
        /* no return */
    }
    
    stack_top = rax + 0xffff8;
    global_save_stack = &var_8;
    launch(global_offset);
    void volatile* global_save_stack_1 = global_save_stack;
    int64_t result = munmap(rax, 0x100000);
    *global_save_stack_1;
    return result;
}

char (*)[0x2000] rio_readinitb(struct rio_t* rp, int fd)
{
    rp->rio_fd = fd;
    rp->rio_cnt = 0;
    rp->rio_bufptr = &rp->rio_buf;
    return &rp->rio_buf;
}

void sigalrm_handler(int sig) __noreturn
{
    __fprintf_chk(stderr, 1, "Program timed out after %d seconds\n", 0);
    exit(1);
    /* no return */
}

size_t rio_writen(int fd, void* usrbuf, size_t n)
{
    void* buf = usrbuf;
    size_t nbytes = n;
    
    while (nbytes)
    {
        ssize_t rax_1 = write(fd, buf, nbytes);
        
        if (rax_1 <= 0)
        {
            if (*__errno_location() != 4)
                return -1;
            
            rax_1 = 0;
        }
        
        nbytes -= rax_1;
        buf += rax_1;
    }
    
    return n;
}

int64_t rio_read(struct rio_t* rp, char* usrbuf, size_t n)
{
    size_t r12 = n;
    int rio_cnt;
    
    while (true)
    {
        rio_cnt = rp->rio_cnt;
        
        if (rio_cnt > 0)
            break;
        
        int rax_1 = read(rp->rio_fd, &rp->rio_buf, 0x2000);
        rp->rio_cnt = rax_1;
        
        if (rax_1 >= 0)
        {
            if (!rax_1)
                return 0;
            
            rp->rio_bufptr = &rp->rio_buf;
        }
        else if (*__errno_location() != 4)
            return -1;
    }
    
    if (rio_cnt < r12)
        r12 = rio_cnt;
    
    int64_t result = r12;
    memcpy(usrbuf, rp->rio_bufptr, result);
    rp->rio_bufptr = &rp->rio_bufptr[result];
    rp->rio_cnt -= r12;
    return result;
}

ssize_t rio_readlineb(struct rio_t* rp, void* usrbuf, size_t maxlen)
{
    char* usrbuf_1 = usrbuf;
    int64_t result = 1;
    
    while (result < maxlen)
    {
        char c;
        int32_t rax_1 = rio_read(rp, &c, 1);
        
        if (rax_1 != 1)
        {
            if (rax_1)
                return -1;
            
            if (result == 1)
                return 0;
            
            break;
        }
        
        char c_1 = c;
        *usrbuf_1 = c_1;
        
        if (c_1 == 0xa)
        {
            usrbuf_1 = &usrbuf_1[1];
            break;
        }
        
        result += 1;
        usrbuf_1 = &usrbuf_1[1];
    }
    
    *usrbuf_1 = 0;
    return result;
}

int urlencode(unsigned char* src, unsigned char* dst)
{
    unsigned char* src_1 = src;
    unsigned char* dst_1 = dst;
    void* fsbase;
    int64_t rax = *(fsbase + 0x28);
    int64_t i = -1;
    
    while (i)
    {
        bool cond:0_1 = 0 != *src;
        src = &src[1];
        i -= 1;
        
        if (!cond:0_1)
            break;
    }
    
    int32_t result = ~i - 1;
    
    while (true)
    {
        int32_t result_1 = result - 1;
        
        if (!result)
            break;
        
        unsigned char r8_1 = *src_1;
        result = r8_1 == 0x2d;
        
        if (r8_1 == 0x2a | result || r8_1 == 0x2e || r8_1 == 0x5f || r8_1 - 0x30 <= 9
            || r8_1 - 0x41 <= 0x19 || r8_1 - 0x61 <= 0x19)
        {
            *dst_1 = r8_1;
            dst_1 = &dst_1[1];
        }
        else if (r8_1 != 0x20)
        {
            if (!(r8_1 - 0x20 <= 0x5f | r8_1 == 9))
            {
                result = -1;
                break;
            }
            
            char buf[0x8];
            __sprintf_chk(&buf, 1, 8, "%%%02X", r8_1);
            *dst_1 = buf[0];
            dst_1[1] = buf[1];
            dst_1[2] = buf[2];
            dst_1 = &dst_1[3];
        }
        else
        {
            *dst_1 = 0x2b;
            dst_1 = &dst_1[1];
        }
        
        src_1 = &src_1[1];
        result = result_1;
    }
    
    if (rax == *(fsbase + 0x28))
        return result;
    
    __stack_chk_fail();
    /* no return */
}

int32_t submitr(char* hostname, int port, char* course, char* userid, char* lab, char* result, char* status_msg)
{
    void* fsbase;
    int64_t rax = *(fsbase + 0x28);
    int errcode = 0;
    int32_t fd = socket(2, 1, 0);
    int32_t result_1;
    
    if (fd >= 0)
    {
        struct hostent* rax_2 = gethostbyname(hostname);
        
        if (rax_2)
        {
            struct sockaddr_in serveraddr;
            __builtin_memset(&serveraddr, 0, 0x10);
            serveraddr.sin_family = 2;
            __memmove_chk(&serveraddr.sin_addr, *rax_2->h_addr_list, rax_2->h_length, 0xc);
            serveraddr.sin_port = RORW(port, 8);
            
            if (connect(fd, &serveraddr, 0x10) >= 0)
            {
                char* result_2 = result;
                int64_t i = -1;
                
                while (i)
                {
                    bool cond:0_1 = 0 != *result_2;
                    result_2 = &result_2[1];
                    i -= 1;
                    
                    if (!cond:0_1)
                        break;
                }
                
                char* course_1 = course;
                int64_t i_1 = -1;
                
                while (i_1)
                {
                    bool cond:1_1 = 0 != *course_1;
                    course_1 = &course_1[1];
                    i_1 -= 1;
                    
                    if (!cond:1_1)
                        break;
                }
                
                char* userid_1 = userid;
                int64_t i_2 = -1;
                
                while (i_2)
                {
                    bool cond:2_1 = 0 != *userid_1;
                    userid_1 = &userid_1[1];
                    i_2 -= 1;
                    
                    if (!cond:2_1)
                        break;
                }
                
                char* lab_1 = lab;
                int64_t i_3 = -1;
                
                while (i_3)
                {
                    bool cond:3_1 = 0 != *lab_1;
                    lab_1 = &lab_1[1];
                    i_3 -= 1;
                    
                    if (!cond:3_1)
                        break;
                }
                
                if (~i_1 - i_2 - i_3 + ~i * 3 - 3 + 0x7b <= 0x2000)
                {
                    char enc_result[0x2000];
                    __builtin_memset(&enc_result, 0, 0x2000);
                    
                    if (urlencode(result, &enc_result) >= 0)
                    {
                        char buf[0x2000];
                        __sprintf_chk(&buf, 1, 0x2000, 
                            "GET /submit?user=%s&course=%s&result=%s HTTP/1.0\r\nHost: %s\r\n\r\n", 
                            userid, course, &enc_result, hostname);
                        char (* rdi_9)[0x2000] = &buf;
                        int64_t i_4 = -1;
                        
                        while (i_4)
                        {
                            bool cond:4_1 = 0 != *rdi_9;
                            rdi_9 = &(*rdi_9)[1];
                            i_4 -= 1;
                            
                            if (!cond:4_1)
                                break;
                        }
                        
                        if (rio_writen(fd, &buf, ~i_4 - 1) >= 0)
                        {
                            struct rio_t rio;
                            rio_readinitb(&rio, fd);
                            
                            if (rio_readlineb(&rio, &buf, 0x2000) > 0)
                            {
                                char version[0x2000];
                                char errmsg[0x2000];
                                __isoc99_sscanf(&buf, "%s %d %[a-zA-z ]", &version, &errcode, 
                                    &errmsg);
                                
                                while (true)
                                {
                                    uint32_t rax_14 = buf[0];
                                    uint32_t rax_15 = rax_14 - 0xd;
                                    
                                    if (rax_14 == 0xd)
                                    {
                                        uint32_t rax_16 = buf[1];
                                        rax_15 = rax_16 - 0xa;
                                        
                                        if (rax_16 == 0xa)
                                            rax_15 = buf[2];
                                    }
                                    
                                    if (!rax_15)
                                    {
                                        if (rio_readlineb(&rio, &buf, 0x2000) > 0)
                                        {
                                            int errcode_1 = errcode;
                                            
                                            if (errcode_1 == 0xc8)
                                            {
                                                strcpy(status_msg, &buf);
                                                close(fd);
                                                uint32_t rdx_4 = *status_msg - 0x4f;
                                                uint32_t rcx_4 = rdx_4;
                                                
                                                if (!rdx_4)
                                                {
                                                    uint32_t rcx_5 = status_msg[1];
                                                    rcx_4 = rcx_5 - 0x4b;
                                                    
                                                    if (rcx_5 == 0x4b)
                                                    {
                                                        uint32_t rcx_6 = status_msg[2];
                                                        rcx_4 = rcx_6 - 0xa;
                                                        
                                                        if (rcx_6 == 0xa)
                                                            rcx_4 = status_msg[3];
                                                    }
                                                }
                                                
                                                result_1 = 0;
                                                bool c_1 = false;
                                                bool z_1 = !rcx_4;
                                                
                                                if (!z_1)
                                                {
                                                    char* rdi_24 = "OK\r\n";
                                                    int64_t i_5 = 5;
                                                    char* status_msg_1 = status_msg;
                                                    
                                                    while (i_5)
                                                    {
                                                        char temp4_1 = *status_msg_1;
                                                        char temp5_1 = *rdi_24;
                                                        c_1 = temp4_1 < temp5_1;
                                                        z_1 = temp4_1 == temp5_1;
                                                        status_msg_1 = &status_msg_1[1];
                                                        rdi_24 = &rdi_24[1];
                                                        i_5 -= 1;
                                                        
                                                        if (!z_1)
                                                            break;
                                                    }
                                                    
                                                    status_msg_1 = !z_1 && !c_1;
                                                    i_5 = c_1;
                                                    
                                                    if (status_msg_1 != i_5)
                                                    {
                                                        if (!rdx_4)
                                                        {
                                                            uint32_t rdx_5 = status_msg[1];
                                                            rdx_4 = rdx_5 - 0x4b;
                                                            
                                                            if (rdx_5 == 0x4b)
                                                                rdx_4 = status_msg[2];
                                                        }
                                                        
                                                        result_1 = ~(0 - 0);
                                                    }
                                                }
                                            }
                                            else
                                            {
                                                __sprintf_chk(status_msg, 1, -1, 
                                                    "Error: HTTP request failed with error %d: %s", 
                                                    errcode_1, &errmsg);
                                                close(fd);
                                                result_1 = -1;
                                            }
                                        }
                                        else
                                        {
                                            __builtin_strncpy(status_msg, 
                                                "Error: Client unable to read status message from result "
                                            "server", 
                                                0x3f);
                                            close(fd);
                                            result_1 = -1;
                                        }
                                        
                                        break;
                                    }
                                    
                                    if (rio_readlineb(&rio, &buf, 0x2000) <= 0)
                                    {
                                        __builtin_strcpy(status_msg, 
                                            "Error: Client unable to read headers from the result server");
                                        close(fd);
                                        result_1 = -1;
                                        break;
                                    }
                                }
                            }
                            else
                            {
                                __builtin_strncpy(status_msg, 
                                    "Error: Client unable to read first header from result server", 
                                    0x3d);
                                close(fd);
                                result_1 = -1;
                            }
                        }
                        else
                        {
                            __builtin_strncpy(status_msg, 
                                "Error: Client unable to write to the result server", 0x33);
                            close(fd);
                            result_1 = -1;
                        }
                    }
                    else
                    {
                        __builtin_strncpy(status_msg, 
                            "Error: Result string contains an illegal or unprintable character.", 
                            0x43);
                        close(fd);
                        result_1 = -1;
                    }
                }
                else
                {
                    __builtin_strcpy(status_msg, 
                        "Error: Result string too large. Increase SUBMITR_MAXBUF");
                    close(fd);
                    result_1 = -1;
                }
            }
            else
            {
                __builtin_strncpy(status_msg, "Error: Unable to connect to the server", 0x27);
                close(fd);
                result_1 = -1;
            }
        }
        else
        {
            __builtin_strncpy(status_msg, "Error: DNS is unable to resolve server address", 0x2f);
            close(fd);
            result_1 = -1;
        }
    }
    else
    {
        __builtin_strcpy(status_msg, "Error: Client unable to create socket");
        result_1 = -1;
    }
    
    if (rax == *(fsbase + 0x28))
        return result_1;
    
    __stack_chk_fail();
    /* no return */
}

void init_timeout(int timeout)
{
    int timeout_1 = timeout;
    
    if (!timeout)
        return;
    
    if (timeout < 0)
        timeout_1 = 0;
    
    signal(0xe, sigalrm_handler);
    alarm(timeout_1);
}

int init_driver(char* status_msg)
{
    void* fsbase;
    int64_t rax = *(fsbase + 0x28);
    signal(0xd, 1);
    signal(0x1d, 1);
    signal(0x1d, 1);
    int32_t fd = socket(2, 1, 0);
    int32_t result;
    
    if (fd >= 0)
    {
        struct hostent* rax_2 = gethostbyname(&hostname);
        
        if (rax_2)
        {
            struct sockaddr_in serveraddr;
            __builtin_memset(&serveraddr, 0, 0x10);
            serveraddr.sin_family = 2;
            __memmove_chk(&serveraddr.sin_addr, *rax_2->h_addr_list, rax_2->h_length, 0xc);
            serveraddr.sin_port = 0x9a3c;
            
            if (connect(fd, &serveraddr, 0x10) >= 0)
            {
                close(fd);
                *status_msg = 0x4b4f;
                status_msg[2] = 0;
                result = 0;
            }
            else
            {
                __builtin_strncpy(status_msg, "Error: Unable to connect to server", 0x23);
                close(fd);
                result = -1;
            }
        }
        else
        {
            __builtin_strncpy(status_msg, "Error: DNS is unable to resolve server address", 0x2f);
            close(fd);
            result = -1;
        }
    }
    else
    {
        __builtin_strcpy(status_msg, "Error: Client unable to create socket");
        result = -1;
    }
    
    if (rax == *(fsbase + 0x28))
        return result;
    
    __stack_chk_fail();
    /* no return */
}

int32_t driver_post(char* userid, char* course, char* lab, char* result, int autograded, char* status_msg)
{
    if (autograded)
    {
        __printf_chk(1, "\nAUTORESULT_STRING=%s\n", result);
        *status_msg = 0x4b4f;
        status_msg[2] = 0;
        return 0;
    }
    
    if (userid && *userid)
        return submitr(&hostname, 0x3c9a, course, userid, lab, result, status_msg);
    
    *status_msg = 0x4b4f;
    status_msg[2] = 0;
    return 0;
}

int check(unsigned int c) __pure
{
    int32_t rcx = 0;
    
    if (c >> 0x1c)
    {
        while (true)
        {
            if (rcx > 0x1f)
                return 1;
            
            if (c >> rcx == 0xa)
                break;
            
            rcx += 8;
        }
    }
    
    return 0;
}

unsigned int gencookie(int id)
{
    srandom(id + 1);
    unsigned int c;
    int i;
    
    do
    {
        c = random();
        i = check(c);
    } while (!i);
    return c;
}

void __libc_csu_init()
{
    _init();
    
    for (int64_t i = 0; i != 1; i += 1)
    {
        int64_t entry_rdx;
        int64_t entry_rsi;
        int32_t entry_rdi;
        (&__frame_dummy_init_array_entry)[i](entry_rdi, entry_rsi, entry_rdx);
    }
}

void __libc_csu_fini() __pure
{
    return;
}

int64_t _fini() __pure
{
    return;
}


