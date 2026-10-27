int test_func(void) {
    int v0 = 50;
    int v1 = 89;
    int v2 = 21;
    int v3 = 73;
    int i;
    v0 = v0 + v3;
    v0 = v0 - v2;
    for (i = 0; i < 16; i++) {
        v3 = v3 + v1;
    }
    return v0;
}
int main(void) { return test_func(); }
