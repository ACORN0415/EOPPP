int test_func(void) {
    int v0 = 53;
    int v1 = 64;
    int v2 = 48;
    int i;
    for (i = 0; i < 11; i++) {
        v2 = v2 + v0;
    }
    return v0;
}
int main(void) { return test_func(); }
