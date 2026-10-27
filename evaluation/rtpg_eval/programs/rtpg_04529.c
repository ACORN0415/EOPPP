int test_func(void) {
    int v0 = 2;
    int v1 = 7;
    int v2 = 51;
    int i;
    for (i = 0; i < 8; i++) {
        v1 = v1 + v2;
    }
    return v0;
}
int main(void) { return test_func(); }
