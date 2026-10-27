int test_func(void) {
    int v0 = 27;
    int v1 = 81;
    int v2 = 41;
    int v3 = 97;
    int v4 = 57;
    int v5 = 28;
    int v6 = 59;
    int v7 = 43;
    int i;
    for (i = 0; i < 16; i++) {
        v7 = v7 + v1;
    }
    return v0;
}
int main(void) { return test_func(); }
