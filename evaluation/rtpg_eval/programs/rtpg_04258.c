int test_func(void) {
    int v0 = 3;
    int v1 = 69;
    int v2 = 70;
    int v3 = 79;
    int i;
    for (i = 0; i < 13; i++) {
        v3 = v3 + v2;
    }
    v3 = v3 - v2;
    v2 = v2 + v1;
    v1 = 27;
    return v0;
}
int main(void) { return test_func(); }
