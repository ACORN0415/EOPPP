int test_func(void) {
    int v0 = 37;
    int v1 = 1;
    int v2 = 80;
    int v3 = 57;
    int v4 = 83;
    int v5 = 82;
    int i;
    v1 = 51;
    for (i = 0; i < 16; i++) {
        v1 = v1 + v1;
    }
    v3 = v3 - v0;
    return v0;
}
int main(void) { return test_func(); }
