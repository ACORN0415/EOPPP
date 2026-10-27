int test_func(void) {
    int v0 = 2;
    int v1 = 32;
    int v2 = 17;
    int i;
    v2 = v2 - v1;
    v0 = v0 / (v1 + 1);
    return v0;
}
int main(void) { return test_func(); }
