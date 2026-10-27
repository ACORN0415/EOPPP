int test_func(void) {
    int v0 = 10;
    int v1 = 55;
    int v2 = 65;
    int i;
    v1 = v1 * 5;
    v1 = v1 + v2;
    return v0;
}
int main(void) { return test_func(); }
