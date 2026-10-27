int test_func(void) {
    int v0 = 45;
    int v1 = 59;
    int v2 = 57;
    int i;
    v0 = v0 - v2;
    v2 = 58;
    return v0;
}
int main(void) { return test_func(); }
