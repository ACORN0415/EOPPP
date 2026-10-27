int test_func(void) {
    int v0 = 10;
    int v1 = 78;
    int v2 = 13;
    int v3 = 7;
    int i;
    for (i = 0; i < 12; i++) {
        v2 = v2 + v1;
    }
    return v0;
}
int main(void) { return test_func(); }
