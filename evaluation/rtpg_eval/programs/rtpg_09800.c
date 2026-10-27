int test_func(void) {
    int v0 = 78;
    int v1 = 37;
    int v2 = 8;
    int v3 = 10;
    int v4 = 63;
    int v5 = 66;
    int v6 = 20;
    int i;
    for (i = 0; i < 7; i++) {
        v4 = v4 + v2;
    }
    return v0;
}
int main(void) { return test_func(); }
