## Every process has a unique ID
## getpid(2) is a system call, getting the pid of current process

```ruby
# mapped to getpid(2)
Process.getpid 
# equals to "$$"
```
Bash shell equivalent
```bash
echo $$
```

## Every process has parent processes

```ruby
# mapped to getppid(2)
Process.getppid
``
