int test_func(void) {
    int v0 = 4;
    int v1 = 67;
    int v2 = 50;
    int v3 = 35;
    int i;
    for (i = 0; i < 19; i++) {
        v0 = v0 + v1;
    }
    return v0;
}
int main(void) { return test_func(); }
