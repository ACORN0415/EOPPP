int test_func(void) {
    int v0 = 95;
    int v1 = 45;
    int v2 = 80;
    int i;
    for (i = 0; i < 10; i++) {
        v2 = v2 + v2;
    }
    v0 = v0 - v2;
    return v0;
}
int main(void) { return test_func(); }
