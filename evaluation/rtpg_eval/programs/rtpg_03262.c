int test_func(void) {
    int v0 = 28;
    int v1 = 28;
    int v2 = 18;
    int v3 = 76;
    int v4 = 16;
    int v5 = 73;
    int i;
    v2 = v2 + v3;
    for (i = 0; i < 20; i++) {
        v0 = v0 + v2;
    }
    v0 = 25;
    return v0;
}
int main(void) { return test_func(); }
