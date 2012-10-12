//cTest_c

//the func add is  defined in outside module
extern int add(int x, int y);

int main(int argc, char* argv[])
{
    add(2, 3);
    return 0;
}

// vim: set tabstop=4 shiftwidth=4 expandtab:
