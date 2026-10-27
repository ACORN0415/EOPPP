int test_func(void) {
    int v0 = 40;
    int v1 = 98;
    int v2 = 19;
    int v3 = 45;
    int v4 = 17;
    int v5 = 50;
    int i;
    v0 = 0;
    for (i = 0; i < 20; i++) {
        v2 = v2 + v0;
    }
    return v0;
}
int main(void) { return test_func(); }
