require 'set'

def stop?(n)
  seen = Set.new
  while n > 1
    return false if seen.include?(n)
    seen << n
    if n.even?
      n /= 2
    else
      n = 3 * n + 3
    end
  end
  true
end

if $PROGRAM_NAME == __FILE__
  n = gets.to_i
  puts stop?(n) ? 'TAK' : 'NIE'
end
