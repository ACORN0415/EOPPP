int test_func(void) {
    int v0 = 15;
    int v1 = 5;
    int v2 = 66;
    int v3 = 27;
    int v4 = 98;
    int v5 = 6;
    int i;
    for (i = 0; i < 19; i++) {
        v3 = v3 + v3;
    }
    v3 = v3 - v0;
    return v0;
}
int main(void) { return test_func(); }
