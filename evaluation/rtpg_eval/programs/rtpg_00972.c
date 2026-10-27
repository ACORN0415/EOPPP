int test_func(void) {
    int v0 = 80;
    int v1 = 37;
    int v2 = 79;
    int v3 = 77;
    int v4 = 47;
    int i;
    for (i = 0; i < 11; i++) {
        v2 = v2 + v0;
    }
    return v0;
}
int main(void) { return test_func(); }
