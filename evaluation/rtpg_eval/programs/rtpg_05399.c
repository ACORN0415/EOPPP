int test_func(void) {
    int v0 = 10;
    int v1 = 98;
    int v2 = 70;
    int i;
    v0 = 14;
    v0 = v0 - v1;
    v0 = v0 * 7;
    return v0;
}
int main(void) { return test_func(); }
