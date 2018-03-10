#!/usr/bin/env bash


################################################################################
function copy_thirdlib() {
    if [ $# -ne 2 ]; then
	return 1
    fi
    lib_src=$1
    lib_obj=$2
    
    echo "Start copying: ${lib_src} => ${lib_obj} ..."

    cp -rf ${lib_src} ${lib_obj}
    if [ $? -ne 0 ]; then
	return 1
    fi

    echo "Copying: ${lib_src} => ${lib_obj} finish ."    
    
}


################################################################################
function copy_openssl() {
    copy_thirdlib ../CthirdLib/OpenSSL32 thirdlib/
}


################################################################################
function copy_gmssl() {
    return 0
}

################################################################################
function copy_tassl() {
    return 0
}




################################################################################
function main() {
    copy_openssl
}
################################################################################
main "$@"
