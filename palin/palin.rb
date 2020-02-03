def half_digits(number_string)
  len = (number_string.size + 1) / 2
  [number_string[0, len].to_i, number_string.size]
end

def incr(half, digits)
  if (half + 1).to_s.size > half.to_s.size
    if digits.even?
      [half + 1, digits + 1]
    else
      [(half + 1) / 10, digits + 1]
    end
  else
    [half + 1, digits]
  end
end

def reconstruct(half, digits)
  s = half.to_s
  (s + s[0, digits - s.size].reverse).to_i
end

def find_palin(number_string)
  half, digits = half_digits(number_string)
  while reconstruct(half, digits) <= number_string.to_i
    half, digits = incr(half, digits)
  end
  reconstruct(half, digits)
end

if $PROGRAM_NAME == __FILE__
  gets.to_i.times do
    n = gets.chomp
    puts find_palin(n)
  end
end
