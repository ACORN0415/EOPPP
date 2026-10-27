int test_func(void) {
    int v0 = 49;
    int v1 = 19;
    int v2 = 47;
    int v3 = 43;
    int v4 = 91;
    int v5 = 65;
    int v6 = 51;
    int i;
    for (i = 0; i < 20; i++) {
        v4 = v4 + v4;
    }
    return v0;
}
int main(void) { return test_func(); }
