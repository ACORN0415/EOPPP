int test_func(void) {
    int v0 = 82;
    int v1 = 21;
    int v2 = 34;
    int v3 = 97;
    int v4 = 78;
    int v5 = 5;
    int v6 = 22;
    int v7 = 14;
    int i;
    v7 = 39;
    v0 = v0 + v7;
    for (i = 0; i < 20; i++) {
        v1 = v1 + v6;
    }
    return v0;
}
int main(void) { return test_func(); }
