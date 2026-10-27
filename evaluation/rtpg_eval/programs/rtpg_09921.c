int test_func(void) {
    int v0 = 41;
    int v1 = 28;
    int v2 = 76;
    int v3 = 44;
    int v4 = 28;
    int i;
    for (i = 0; i < 15; i++) {
        v3 = v3 + v3;
    }
    return v0;
}
int main(void) { return test_func(); }
