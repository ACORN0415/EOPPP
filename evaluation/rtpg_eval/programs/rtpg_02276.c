int test_func(void) {
    int v0 = 31;
    int v1 = 63;
    int v2 = 18;
    int i;
    for (i = 0; i < 6; i++) {
        v1 = v1 + v1;
    }
    return v0;
}
int main(void) { return test_func(); }
