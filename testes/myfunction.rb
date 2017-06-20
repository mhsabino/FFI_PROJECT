# MyFunction.rb
module MyFunction
  extend FFI::Library
  ffi_lib "./libmyfunction.so"
  attach_function :sum_of_values, [:int, :int], :int
end
