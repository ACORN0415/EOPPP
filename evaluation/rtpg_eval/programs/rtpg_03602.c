int test_func(void) {
    int v0 = 60;
    int v1 = 90;
    int v2 = 55;
    int v3 = 11;
    int v4 = 98;
    int v5 = 78;
    int i;
    v5 = v5 + v1;
    for (i = 0; i < 9; i++) {
        v5 = v5 + v1;
    }
    return v0;
}
int main(void) { return test_func(); }
