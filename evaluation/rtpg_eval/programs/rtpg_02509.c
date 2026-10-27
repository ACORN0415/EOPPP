int test_func(void) {
    int v0 = 87;
    int v1 = 14;
    int v2 = 33;
    int i;
    v0 = 100;
    v0 = v0 - v1;
    return v0;
}
int main(void) { return test_func(); }
