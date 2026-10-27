int test_func(void) {
    int v0 = 90;
    int v1 = 47;
    int v2 = 53;
    int i;
    for (i = 0; i < 19; i++) {
        v1 = v1 + v1;
    }
    return v0;
}
int main(void) { return test_func(); }
