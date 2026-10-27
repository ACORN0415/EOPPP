int test_func(void) {
    int v0 = 24;
    int v1 = 19;
    int v2 = 30;
    int v3 = 19;
    int v4 = 78;
    int v5 = 6;
    int i;
    for (i = 0; i < 19; i++) {
        v3 = v3 + v2;
    }
    v0 = v0 + v1;
    v4 = 84;
    return v0;
}
int main(void) { return test_func(); }
