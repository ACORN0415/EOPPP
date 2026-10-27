int test_func(void) {
    int v0 = 71;
    int v1 = 52;
    int v2 = 16;
    int v3 = 97;
    int v4 = 35;
    int v5 = 47;
    int v6 = 19;
    int v7 = 3;
    int i;
    v1 = v1 + v4;
    for (i = 0; i < 16; i++) {
        v4 = v4 + v5;
    }
    return v0;
}
int main(void) { return test_func(); }
