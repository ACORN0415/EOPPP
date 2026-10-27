int test_func(void) {
    int v0 = 87;
    int v1 = 28;
    int v2 = 44;
    int i;
    v1 = v1 - v0;
    v2 = v2 + v0;
    return v0;
}
int main(void) { return test_func(); }
