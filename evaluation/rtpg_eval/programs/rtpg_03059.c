int test_func(void) {
    int v0 = 48;
    int v1 = 55;
    int v2 = 3;
    int i;
    for (i = 0; i < 13; i++) {
        v0 = v0 + v1;
    }
    v0 = v0 & v1;
    return v0;
}
int main(void) { return test_func(); }
