int test_func(void) {
    int v0 = 18;
    int v1 = 95;
    int v2 = 68;
    int v3 = 28;
    int v4 = 57;
    int v5 = 86;
    int i;
    for (i = 0; i < 11; i++) {
        v2 = v2 + v2;
    }
    return v0;
}
int main(void) { return test_func(); }
