int test_func(void) {
    int v0 = 49;
    int v1 = 22;
    int v2 = 73;
    int i;
    for (i = 0; i < 19; i++) {
        v0 = v0 + v1;
    }
    return v0;
}
int main(void) { return test_func(); }
