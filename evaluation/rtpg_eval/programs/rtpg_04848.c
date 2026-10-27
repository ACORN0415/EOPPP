int test_func(void) {
    int v0 = 5;
    int v1 = 66;
    int v2 = 85;
    int i;
    v2 = v2 + v2;
    v0 = v0 * 10;
    return v0;
}
int main(void) { return test_func(); }
