int test_func(void) {
    int v0 = 89;
    int v1 = 92;
    int v2 = 95;
    int v3 = 9;
    int v4 = 75;
    int i;
    for (i = 0; i < 6; i++) {
        v1 = v1 + v1;
    }
    v4 = 79;
    return v0;
}
int main(void) { return test_func(); }
