require 'ffi'
require './myfunction'

s = MyFunction.sum_of_values(1,9)

puts s
