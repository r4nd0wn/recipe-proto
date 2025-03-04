rm -rf ./exports;
mkdir -p ./exports/swift;
mkdir -p ./exports/cpp;
mkdir -p ./exports/python;
mkdir -p ./exports/java;
#mkdir -p ./exports/go;

#protoc --swift_out=./exports/swift/. --cpp_out=./exports/cpp/. --java_out=./exports/java/. --python_out=./exports/python/. --go_out=./exports/go/. recipe.proto
protoc --swift_out=./exports/swift/. --cpp_out=./exports/cpp/. --java_out=./exports/java/. --python_out=./exports/python/. recipe.proto
