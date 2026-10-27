int test_func(void) {
    int v0 = 11;
    int v1 = 74;
    int v2 = 79;
    int i;
    v0 = v0 - v2;
    for (i = 0; i < 13; i++) {
        v1 = v1 + v0;
    }
    v2 = v2 + v0;
    v1 = v1 & v0;
    return v0;
}
int main(void) { return test_func(); }
