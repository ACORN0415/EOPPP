int test_func(void) {
    int v0 = 70;
    int v1 = 81;
    int v2 = 37;
    int v3 = 65;
    int v4 = 43;
    int i;
    for (i = 0; i < 12; i++) {
        v0 = v0 + v4;
    }
    v1 = v1 % (v0 + 1);
    return v0;
}
int main(void) { return test_func(); }
