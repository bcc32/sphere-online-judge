def up(level, side_length)
  # (1..level - side_length + 1).reduce(0, :+)
  (level - side_length + 1) * (level - side_length + 2) / 2
end

def down(level, side_length)
  up(level, side_length * 2)
end

def count(level)
  # (1..level)
  #   .map { |x| up(level, x) + down(level, x) }
  #   .reduce(0, :+)
  # XXX WTF???
  # http://oeis.org/A002717
  level * (level + 2) * (2 * level + 1) / 8
end

if $PROGRAM_NAME == __FILE__
  gets.to_i.times do
    n = gets.to_i
    puts count(n)
  end
end
