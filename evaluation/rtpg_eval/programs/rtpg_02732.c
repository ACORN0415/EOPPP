int test_func(void) {
    int v0 = 16;
    int v1 = 47;
    int v2 = 72;
    int v3 = 73;
    int i;
    for (i = 0; i < 14; i++) {
        v2 = v2 + v2;
    }
    return v0;
}
int main(void) { return test_func(); }
