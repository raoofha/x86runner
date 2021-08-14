
sed -e '/_X86RUNNERJS_/r x86runner.js' -e '/_X86RUNNERJS_/d' $1/src/x86runner.html > x86runner.html &&
htmlSize=$(printf '%14d' `cat x86runner.html | wc -c`) &&
wasmSize=$(printf '%14d' `cat x86runner.wasm | wc -c`) &&
sed -i -e "s/_14W_HTMLSIZE_/$htmlSize/g"  -e "s/_14W_WASMSIZE_/$wasmSize/g" x86runner.html &&
cat x86runner.wasm >> x86runner.html &&
x86runnerSize=`cat x86runner.html | wc -c`
if [ $(($htmlSize + $wasmSize)) -ne $x86runnerSize ] ; then
  echo $htmlSize + $wasmSize != $x86runnerSize
  exit -1
fi
echo $htmlSize + $wasmSize = $(($htmlSize + $wasmSize)) == $x86runnerSize
