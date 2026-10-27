int test_func(void) {
    int v0 = 23;
    int v1 = 47;
    int v2 = 70;
    int i;
    for (i = 0; i < 5; i++) {
        v2 = v2 + v0;
    }
    v2 = v2 ^ v1;
    return v0;
}
int main(void) { return test_func(); }
