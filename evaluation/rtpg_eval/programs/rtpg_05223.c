int test_func(void) {
    int v0 = 58;
    int v1 = 91;
    int v2 = 44;
    int i;
    v0 = v0 + v0;
    v0 = v0 - v2;
    return v0;
}
int main(void) { return test_func(); }
