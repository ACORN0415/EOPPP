int test_func(void) {
    int v0 = 41;
    int v1 = 90;
    int v2 = 11;
    int i;
    v2 = v2 - v1;
    v0 = v0 + v2;
    return v0;
}
int main(void) { return test_func(); }
